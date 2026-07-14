#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded_scores {};
    for (double score : student_scores) {
        rounded_scores.emplace_back(static_cast<int>(score));
    }
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int fails = 0;
    for (int score : student_scores){
        if (score <= 40) {
            ++fails;
        } 
    }
    return fails;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int interval = (highest_score - 40)/4;
    int a = highest_score-interval;
    if (highest_score == 100) {
        ++a;
    }
    return {a-interval*3,a-interval*2,a-interval,a};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> output {};
    for (int i = 0; i < student_scores.size(); i++) {
        output.emplace_back(std::to_string(i+1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
    }
    return output;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores.at(i) == 100) {
            return student_names.at(i);
        }
    }
    return "";
}
