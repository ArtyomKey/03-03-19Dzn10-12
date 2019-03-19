struct node{
	int element;
	node *left;
	node *right;
	int height;
  int num; //количество элементов в дереве
};
class avl_tree{
  private:
    node* root;
  public:
    int get_height(node* root){
      int x;
      int l, r;
      if(root->left != NULL){
        l = get_height(root->left);
      }
      if(root->right != NULL){
        r = get_height(root->left);
      }
      x = (l > r)? l:r;
      height = ++x;
      return height;
    }
    int* listOfTree(node* root){
      //считаем, что при добавлении элемента уввеличиваем num на 1, тогда num известен
      static int i = 0;
      int* temp = new int[num];
      if(root != NULL){
        temp[i] = data;
        i++;
        if(root->left != NULL){
          listOfTree(root->left);
        }
        if(root->right != NULL){
          listOfTree(root->right);
        }
      }
      return temp;
    }
    void max(node* root){
      int* t = new int[num];
      t = listOfTree(root);
      for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; i++){
          if(t[i] < t[j]){
            swap(t[i],t[j]);
          }
        }
      }
      for(int i = 0; i < num; i++){
        cout << t[i];
      }
    };
    void min(int* t){
      int* t = new int[num];
      t = listOfTree(root);
      for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; i++){
          if(t[i] > t[j]){
            swap(t[i],t[j]);
          }
        }
      }
      for(int i = 0; i < num; i++){
        cout << t[i];
      }
    };