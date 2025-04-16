package data;

public class NullBlock extends AbstractSolidBlock implements SmeltableBlock {
    public NullBlock() {
        super("NullBlock", ' ');
        pickable = false;
    }

    public Block smelt() {
        return new NullBlock();
    }
}
