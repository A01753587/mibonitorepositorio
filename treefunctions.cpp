// Ejercicio de EDA: 

//Arboles binarios:
// en public 
bool contains(T value){
    return _contains(value,  )
}

void inorder(std::function<void(T)> fn)const{
    return _inorder(fn, _root);
}
void preorder(std::function<void(T)> fn)const{
    return _preorder(fn, _root);
}
void postorder(std::function<void(T)> fn)const{
    return _ipostorder(fn, _root);
}
void leftorder(std::function<void(T)> fn)const{
    return _leftoorder(fn, _root);
}

//en private

// O(log N)
bool _contains(T value, Node* p)const{
    if(p == nullptr){ // if (not p){}
        return false;
    }
    if(value == p->value){
        return true;
    }
    if(value < p->value){
        return _contains(value, p->left);
    }
    return _contains(value, p->right);
}

//operaciones de traversion de arboles

// complexity O(n) for all traversal functions
//travrse left->visita a la raiz->traverse sobre right
//en los arboles binarios de busqueda se da de resultado, su recorrido da los elementos en ordern ascendente
void _inorder(std::function<void(T)> fn, Node* p){
    if(not p){
        return;
    }
    _inorder(fn, p->left);
    fn(p->value);
    _inorder(fn, p->right);
}

//visita a la raiz->traverse left->traverse right
//visitamos los elementos del subarbol de la izquierda despues de visitar la railz y despues vamos al derecho, vease imagen 15:45
void _preorder(std::function<void(T)> fn, Node* p){
    if(not p){
        return;
    }
    fn(p->value);
    _preorder(fn, p->left);
    _preorder(fn, p->right);
}
// traversion left->traversion right-> visita a la raiz
void _postorder(std::function<void(T)> fn, Node* p){
    if(not p){
        return;
    }
    _postorder(fn, p->left);
    _postorder(fn, p->right);
    fn(p->value);
}
//se recorre por niveles
void leftorder(std::function<void(T)> fn, Node* p){
    if (not p){
        return;
    }
}


