size_t print_list(const list_t *h); /** 0 **/
size_t list_len(const list_t *h); /** 1 **/
list_t *add_node(list_t **head, const char *str); /** 2 **/
list_t *add_node_end(list_t **head, const char *str); /** 3 **/
void free_list(list_t *head); /** 4 **/
