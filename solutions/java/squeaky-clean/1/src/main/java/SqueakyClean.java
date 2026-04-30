import java.util.ArrayList;
class SqueakyClean {
    static String clean(String identifier) {
        ArrayList<Character> chars = new ArrayList<Character>();
        for (char c: identifier.toCharArray()) {
            chars.add(c);
        }
        
        StringBuilder builder = new StringBuilder();
        
        for (int i = 0; i < chars.size(); i++) {
            if (Character.isWhitespace(chars.get(i))) {
                chars.set(i,'_');  
            } else if (chars.get(i) == '-') {
                if (i+1 < chars.size()) {
                    chars.set(i+1, Character.toUpperCase(chars.get(i+1)));
                }
                chars.remove(i);
            } else if (chars.get(i) == '4') {
                chars.set(i,'a');
            } else if (chars.get(i) == '3') {
                chars.set(i,'e');
            } else if (chars.get(i) == '0') {
                chars.set(i,'o');
            } else if (chars.get(i) == '1') {
                chars.set(i,'l');
            } else if (chars.get(i) == '7') {
                chars.set(i,'t');
            } else if (!Character.isLetter(chars.get(i))) {
                chars.remove(i);
                i--;
                continue;
            }
            if (i < chars.size() && i >= 0) {
                builder.append(chars.get(i));
            }
        }
        String builtString = builder.toString();
        return builtString;
    }
}