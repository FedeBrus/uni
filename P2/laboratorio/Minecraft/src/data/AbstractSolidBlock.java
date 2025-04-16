package data;

public abstract class AbstractSolidBlock extends AbstractBlock {
    public AbstractSolidBlock(String blockName, char content) {
        super(blockName, content, false, false);
        pickable = true;
    }
}
