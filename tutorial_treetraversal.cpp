//Code fragments for Binary Tree Traversals, in Java.
//Sampled from OpenDSA for Tree Traversals, and this week's worksheet

static void preorder(BinNode rt) {
  if (rt == null) return; // Empty subtree - do nothing
  visit(rt);              // Process root node
  preorder(rt.left());    // Process all nodes in left
  preorder(rt.right());   // Process all nodes in right
}

static void inorder(BinNode rt) {
  if (rt == null) return; // Empty subtree - do nothing
  inorder(rt.left());     // Process all nodes in left
  visit(rt);              // Process root node
  inorder(rt.right());    // Process all nodes in right
}

static void postorder(BinNode rt) {
  if (rt == null) return; // Empty subtree - do nothing
  postorder(rt.left());     // Process all nodes in left
  postorder(rt.right());    // Process all nodes in right
  visit(rt);              // Process root node
}