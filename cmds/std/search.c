// look.c
// ͬʱ���� �ƹ�, ����, ��ʦ�ɶ࿴����

#include <room.h>
#include <ansi.h>

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int do_search_ob(object me, object env);
int do_search_item (object env, string item);

int main(object me, string arg)
{
  object	obj, env;
  int		can_see;

  if (!can_see = NATURE_D->vision(me))
    return notify_fail ("��������������ڵ�, ʲôҲ������.\n");

  env = environment(me);
  
  if ( !arg )
    return do_search_ob(me, env);
  arg = lower_case(arg);

  if ( (obj = present(arg, me)) || (obj = present(arg, env))) {
    return do_search_ob (me, obj);
  }
  else {
    return do_search_item(env, arg);
  }
}

int do_search_item (object env, string item)
{
  mapping       search_desc;
  string        *search_item;
  int           n;

  search_desc = env->query("search_desc/"+item);
  if (!search_desc)
    return notify_fail ("�������ϰ��죬���ǿ��������κ�����֮����\n");
  write (search_desc);
  return 1;
}

int do_search_ob(object me, object env)
{
  mapping	search_desc;
  string	*search_item, msg;
  int		n;

  search_desc = env->query("search_desc");
  if (!search_desc || (n = sizeof (search_desc)) == 0)
    return notify_fail ("�������ϰ��죬���ǿ��������κ�����֮����\n");
  search_item = keys(search_desc);
  write ("��������, ���� "+search_item[random(n)]+" �ֵֹġ�\n");
  return 1;
}

int help (object me)
{
	write(@HELP
ָ���ʽ : search [<��Ʒ>|<����>]
ָ��˵�� : 
           ���ָ��������Ѱ�����ڵĻ�����ĳ����Ʒ�����
HELP );
	return 1;
}
