import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class AppointmentScheduler {
    public LocalDateTime schedule(String appointmentDateDescription) {
        DateTimeFormatter parser = DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss");
        LocalDateTime date = LocalDateTime.parse(appointmentDateDescription, parser);

        DateTimeFormatter printer = DateTimeFormatter.ofPattern("yyyy/MM/dd HH:mm:ss");
        printer.format(date);
        return date;
    }

    public boolean hasPassed(LocalDateTime appointmentDate) {
        if (appointmentDate.isBefore(LocalDateTime.now())) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isAfternoonAppointment(LocalDateTime appointmentDate) {
        int hour = appointmentDate.getHour();
        if ( hour >= 12 && hour < 18) {
            return true;
        } else {
            return false;
        }
    }

    public String getDescription(LocalDateTime appointmentDate) {
        DateTimeFormatter printer = DateTimeFormatter.ofPattern("EEEE, MMMM d, yyyy, 'at' h:mm a");
        return "You have an appointment on " + appointmentDate.format(printer) + ".";
    }

    public LocalDate getAnniversaryDate() {
        LocalDate currentDate = LocalDate.now();
        int currentYear = currentDate.getYear();
        return LocalDate.of(currentYear, 9, 15);
    }
}
