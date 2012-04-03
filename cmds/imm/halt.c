// halt.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  object ob;

  if (!arg) ob = me;
  else if (!ob=find_player(arg)) ob = me;

  if( !ob->is_fighting() )
    return notify_fail(ob->short()+"���ڲ�û����ս����\n");

  ob->remove_all_killer();
  message_vision("$N����ʦ������ֹͣ��$n�Ĵ򶷡�\n", me, ob);
  return 1;
}

int help(object me)
{
   write(@HELP
ָ���ʽ: halt [˭]

����ֹͣĳ�˵�ս�������û�ж��󣬾���ֹͣ�Լ���ս����
HELP
   );
   return 1;
}
