// wade 2002-10-23 ���� secure ���� autoload ������Ʒ
inherit F_CLEAN_UP;
int help (object me);
 
int main(object me,string arg)
{
  object        *ob, obj;
  int           i, n;

#ifdef SAVEEQ
  int		autoload;
#endif
 
  if (!arg) return help(me);

  ob = all_inventory(me);
  n = sizeof (ob);

#ifdef SAVEEQ
  for (i=0; i<n; i++)
    if (ob[i]->query_autoload()) autoload++;
  autoload=0;
#endif

  if (arg == "all") {
    for (i=0; i<n; i++) {
      ob[i]->set_temp("secured", 1);
#ifdef SAVEEQ
      if (ob[i]->query("equipped")) {
        if (autoload < 3 && !ob[i]->query_autoload()) {
          ob[i]->set("autoload", 1);
          autoload++;
        }
      }
#endif
    }
  }
 
  else if (obj = present(arg, me)) {
#ifdef SAVEEQ
    if (autoload < 3 && obj->query("equipped") && !obj->query_temp ("secured"))
      obj->set ("autoload", 1);
#endif

    obj->set_temp("secured",1);
  }
  else return notify_fail ("û��������Ʒ��\n");
  return 1;
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : secure <���>
��    �� : secure map
           secure all
˵    �� :
           ��ָ������ҿ��Ա�����������ⱻ drop��sell��give
HELP
    );
    return 1;
}
