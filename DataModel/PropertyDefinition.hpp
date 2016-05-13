

struct PropertDefinition {
    enum class ValueType {
    Number ,
    Boolean,
    String
    };

    ValueType type;
    String displayname;
    String description;
    String defaultvalue;

};
