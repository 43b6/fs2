// unlock.c

#include <room.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	mapping doors;
	string *dirs, dir;
	string	key, *key_of_room;
	object	ob, env;
	int i;

	if( !arg ) return notify_fail("��Ҫ��ʲô������\n");
	arg = lower_case(arg);

	if (sscanf (arg, "%s with %s", arg, key) != 2) return
	  notify_fail ("������ʲô���Ű���\n");
	if (!ob=present (key, me)) return
	  notify_fail ("�����ϲ�û�� "+key+"��\n");

	env=environment(me);
	doors = env->query_doors();
	if( mapp(doors) ) {
		dirs = keys(doors);
		if( member_array(arg, dirs)!=-1 ) dir = arg;
		else for(i=0; i<sizeof(dirs); i++)
			if( arg==doors[dirs[i]]["name"] || member_array(arg, doors[dirs[i]]["id"])!=-1 ) {
				dir = dirs[i];
				break;
			}
		if( !dir ) return notify_fail("��Ҫ��ʲô������\n");
	
		if ((string)env->query("need_key/"+dir) ||
		    (string)env->query("need_key/door"))
		{
                  key_of_room=ob->query("key_of_room");
		  if (!sizeof (key_of_room) ||
		       strsrch(implode(key_of_room," "), file_name (env))==-1)
		  {
                      return notify_fail ("���Կ�ײ��ܿ�����š�\n");
		  }
		}

		if( env->unlock_door(dir) ) {
			message_vision("$N��������һ��, ��" + doors[dir]["name"] + "�������ˡ�\n", me);
			return 1;
		}
	}

	return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : unlock [<door> �� <����>] with <key>
ָ��˵�� : 
           ���ָ�����������š�
	   ps. �������ʹ�� east, west...�ȵ�, ����ʹ�� e,w �ȼ�д
�����ο� :
           lock��open��close 
HELP
    );
    return 1;
}
