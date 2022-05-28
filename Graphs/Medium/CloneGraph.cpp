/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* helper(Node* root,unordered_map<Node*, Node*>&m){
        if(root==NULL)
            return NULL;
        Node*temp;
        if(m.count(root)==0){
            temp=new Node(root->val);
            m[root]=temp;
            for(int i=0;i<root->neighbors.size();i++){
                Node*adj=helper(root->neighbors[i], m);
                temp->neighbors.push_back(adj);
            }
        }
        else{
            temp=m[root];
        }
        return temp;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> m;
        return helper(node,m);
    }
};