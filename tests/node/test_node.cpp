#include <node/node.h>
#include <gtest/gtest.h>

typedef Node<int> intNode;

class NodeTest : public ::testing::Test {
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(NodeTest, ConstructTest) {
    intNode node;
    ASSERT_EQ(node.getNext(), nullptr);
    ASSERT_EQ(node.getPrev(), nullptr);
    ASSERT_TRUE((std::is_same<decltype(node.getData()), int>::value));
}

TEST_F(NodeTest, GetSetPrevNextTest) {
    intNode node0, node1, node2;
    node0.setNext(&node1);
    node1.setPrev(&node0);
    node1.setNext(&node2);
    node2.setPrev(&node1);
    ASSERT_EQ(node0.getPrev(), nullptr);
    ASSERT_EQ(node0.getNext(), &node1);
    ASSERT_EQ(node1.getPrev(), &node0);
    ASSERT_EQ(node1.getNext(), &node2);
    ASSERT_EQ(node2.getPrev(), &node1);
    ASSERT_EQ(node2.getNext(), nullptr);
}

TEST_F(NodeTest, GetSetDataTest) {
    intNode node(1);
    ASSERT_EQ(node.getData(), 1);
    node.setData(2);
    ASSERT_EQ(node.getData(), 2);
}