int help (object me);
inherit F_CLEAN_UP;

int main(object me, string arg)
{
  object	*ob, obj;
  int		i;

  if (!arg) return help(me);
  if (arg == "all") {
    for (i=0; i<sizeof(ob=all_inventory(me)); i++) {
      ob[i]->delete_temp("secured");
      ob[i]->delete("autoload");
    }
  }

  else if (obj = present(arg, me)) {
    obj->delete_temp("secured");
#ifdef SAVEEQ
    obj->delete ("autoload");
#endif
  }
  else return notify_fail ("û��������Ʒ.\n");
  return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : unsecure <���>
��    �� : unsecure map
	   unsecure all
˵    �� :
	   ��ָ������ҿ���ȡ������������ſ��Ա� drop��sell��give
HELP
    );
    return 1;
}
