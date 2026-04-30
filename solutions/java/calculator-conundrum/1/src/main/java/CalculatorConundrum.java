class CalculatorConundrum {
    public String calculate(int operand1, int operand2, String operation) {
        if (operation == null) {
            throw new IllegalArgumentException("Operation cannot be null");
        }
        if (operation == "") {
            throw new IllegalArgumentException("Operation cannot be empty");
        }
        if (operation.equals("/")) {
            try {
                int division = operand1 / operand2; 
            } catch (ArithmeticException e) {
                throw new IllegalOperationException("Division by zero is not allowed", e);
            }
        }
        int result = switch(operation) {
            case "+" -> operand1 + operand2;
            case "*" -> operand1 * operand2;
            case "/" -> operand1 / operand2;
            default -> throw new IllegalOperationException("Operation '" + operation + "' does not exist");
        };
        String outString = String.valueOf(operand1) + " " + operation + " " + String.valueOf(operand2) + " = " + String.valueOf(result);
        return outString;
    }
}
