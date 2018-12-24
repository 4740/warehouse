class FMyClass
{
    uint32 ExampleProperty1;
    uint32 ExampleProperty2;

    // Hash Function
    friend uint32 GetTypeHash(const FMyClass& MyClass)
    {
        // HashCombine is a utility function for combining two hash values
        uint32 HashCode = HashCombine(MyClass.ExampleProperty1, MyClass.ExampleProperty2);
        return HashCode;
    }

    // For demonstration purposes, two objects that are equal
    // should always return the same hash code.
    bool operator==(const FMyClass& LHS, const FMyClass& RHS)
    {
        return LHS.ExampleProperty1 == RHS.ExampleProperty1
            && LHS.ExampleProperty2 == RHS.ExampleProperty2;
    }
};