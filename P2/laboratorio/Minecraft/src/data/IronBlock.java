package data;

public class IronBlock extends AbstractSolidBlock {
    public IronBlock() {
        super("IronBlock", 'F');
    }

    @Override
    public int blockId() {
        return 6;
    }
}
