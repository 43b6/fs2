// home.c

inherit F_CLEAN_UP;

void create() {seteuid(getuid());}
int main(object me, string arg)
{
  string msg;
  string home_path;
  object env;

  printf("me=%s\n",geteuid(me));
  printf("user_path=%s\n",user_path(geteuid(me)));
  if ( file_size(home_path=user_path(geteuid(me)) + "workroom.c") <= 0 )
    if (file_size(home_path=user_path(geteuid(me)) + "room/workroom.c") <=0 )
      return notify_fail("��û���Լ��Ĺ����ҡ�\n");
  if( stringp(msg = me->query("msg_mout")) )
    message_vision(msg+"\n", me);
  else
    message_vision("ֻ��һ���������$N����Ӱ�Ѿ������ˡ�\n", me);

  env = environment(me);
  me->move(home_path);
  if( !sizeof(all_inventory(env)) && ( !env->query("objects")
   || !sizeof(env->query("objects")) ) ) destruct(env);

  if( stringp(msg = me->query("msg_min")) )
    message_vision(msg+"\n", me);
  else
    message_vision("$N����ӰͻȻ������һ������֮�С�\n", me);

  return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : home

���ô�һָ���ֱ�ӻص��Լ��Ĺ����ҡ�
��������趨 'msg_home' property, ���ڳ����˶��ῴ���Ǹ�ѶϢ.
HELP
    );
    return 1;
}
