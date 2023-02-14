List::List(const List& other) 
{
    begin = end = 0;
    Node* temp = other.begin;
    while (temp) 
    {
        Push(temp->getViolation());
        temp = temp->next;
    }
}

List& List::operator=(const List& other) 
{
    List tmp(other);
    std::swap(*this, tmp);
    return *this;
}

void List::Push(Node* n) 
{
    if (!end)
        begin = n;
    else
        end->next = n;
    end = n;
}

void List::Push(std::string str) 
{
    Push(new Node(str));
}

void List::Clear() {
    Node* temp = 0;
    while (begin) {
        temp = begin;
        begin = begin->next;
        delete temp;
    }
    end = 0;
}

void List::PushHead(std::string str) 
{
    Node* temp = new Node(str);
    temp->next = begin;
    begin = temp;
    if (!end)
        end = begin;
}

void database::Clear(TreeNode* temp) {
    if (temp) {
        Clear(temp->left);
        Clear(temp->right);
        delete temp;
    }
}

void database::Add(TreeNode*& head, TreeNode* parent, std::string car, std::string str)
{
    TreeNode* temp = new TreeNode(car, str);
    temp->left = temp->right = temp->parent = 0;
    if (!head)
        head = temp;
    else 
    {
        if (car < head->getCar())
            Add(head->left, head, car, str);
        else if (car > head->getCar())
            Add(head->right, head, car, str);
        else
            head->Push(str);
    }
}

void database::Add(std::string car, std::string str)
{
    Add(root, 0, car, str);
}

void database::PrintAll(TreeNode* temp) {
    if (temp) {
        PrintAll(temp->left);
        std::cout << "Íîìåð ìàøèíû: " << temp->getCar() << "\n";
        std::cout << "Íàðóøåíèÿ: " << "\n";
        std::cout << temp->getViolations();
        PrintAll(temp->right);
    }
}

TreeNode* database::PrintNumber(TreeNode* node, std::string input) {
    if (!node)
        return 0;
    if (input == node->getCar())
        return node;
    else if (input < node->getCar())
        return  PrintNumber(node->left, input);
    else
        return  PrintNumber(node->right, input);
}

void database::PrintNumber(std::string input) 
{
    TreeNode* node = PrintNumber(root, input);
    if (!node)
        std::cout << "Not found." << "\n";
    else 
    {
        std::cout << "Íîìåð ìàøèíû: " << node->getCar() << "\n";
        std::cout << "Íàðóøåíèÿ: " << "\n";
        std::cout << node->getViolations();
    }
}

void database::PrintRangeNumber(TreeNode* node, std::string min, std::string max) 
{
    if (!node)
        return;
    if (node->getCar() > min)
        PrintRangeNumber(node->left, min, max);
    if (node->getCar() >= min && node->getCar() <= max)
        PrintNumber(node->getCar());
    if (node->getCar() < max)
        PrintRangeNumber(node->right, min, max);
}

void database::PrintRangeNumber(std::string min, std::string max)
{
    PrintRangeNumber(root, min, max);
}
