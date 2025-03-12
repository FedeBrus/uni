package data;

public class Block {
    private char content;

    public Block()  {
        this.content = '.';
    }

    public Block(char content) {
        this.content = content;
    }

    public char display() {
        return content;
    }

    public void setContent(char content) {
        this.content = content;
    }
}
