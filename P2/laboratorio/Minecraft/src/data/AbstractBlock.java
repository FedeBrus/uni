package data;

public abstract class AbstractBlock implements Block {
    protected String blockName;
    protected char content;
    protected boolean fallsWithGravity;
    protected boolean fallsThrough;
    protected boolean pickable;

    protected AbstractBlock(String blockName, char content, boolean fallsWithGravity, boolean fallsThrough) {
        this.blockName = blockName;
        this.content = content;
        this.fallsWithGravity = fallsWithGravity;
        this.fallsThrough = fallsThrough;
        this.pickable = false;
    }

    protected AbstractBlock(String blockName, char content) {
        this(blockName, content, false, false);
    }

    public char display() {
        return this.content;
    }

    public boolean isFallsWithGravity() {
        return fallsWithGravity;
    }

    public boolean isFallsThrough() {
        return fallsThrough;
    }

    public boolean isPickable() {
        return pickable;
    }

    @Override
    public String toString() {
        return String.format("%s {\n\tdisplay: '%c',\n\tfallsWithGravity: %b,\n\tfallsThrough: %b\n}",
                blockName, this.display(), this.isFallsWithGravity(), this.isFallsThrough());
    }

    public void displayInInventory() {
        System.out.print("[" + content + "]");
    }
}
