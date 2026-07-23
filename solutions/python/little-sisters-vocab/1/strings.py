
def add_prefix_un(word):

    return "un" + word


def make_word_groups(vocab_words):
    
    prefix = ' :: ' + vocab_words[0]
    
    return prefix.join(vocab_words)


def remove_suffix_ness(word):
 
    if word[-5] == 'i' :
        return word[:-5] + 'y'
    else:
        return word[:-4]


def adjective_to_verb(sentence, index):
   
    if sentence.split()[index][-1] == '.':
        return sentence.split()[index][:-1] + 'en'
    else:
        return sentence.split()[index] + 'en'
    