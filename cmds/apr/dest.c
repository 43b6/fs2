// dest.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string option, target;

	object obj;

	if (!arg) return notify_fail("ָ���ʽ : dest <���֮���ƻ���>\n" );

	if( sscanf(arg, "%s %s", option, target)!=2 ) target = arg;

	if( option == "-r" &&
		( (string)SECURITY_D->get_status(me)=="(admin)" ||
		  (string)SECURITY_D->get_status(me)=="(manager)" ))
	{
		seteuid(ROOT_UID);
	}
	obj = find_object(target);
	if (!obj) obj = present(target, me);
	if (!obj) obj = present(target, environment(me));
	if (!obj) obj = find_object( resolve_path(me->query("cwd"), target) );
	if (!obj) return notify_fail("û���������....��\n");

	if( environment(me)==environment(obj) )
		message_vision("$N�ٻ���һ���ڶ������Խ�$n��û��\n", me, obj);

	if (userp(obj)) {
	  log_file("quit", 
                sprintf("%s�� %s �뿪��Ϸ��", obj->short(), ctime(time()))
	  );
          CHANNEL_D->do_channel(me, "sys",
                sprintf("%s�뿪��Ϸ�ˡ�", obj->short()) );
	  obj->set("last_on", time());
	  obj->set("last_from", query_ip_name(obj));
	  obj->save();
	  destruct(obj);
	}
	else {
	  seteuid(geteuid(me));
	  destruct(obj);
	}
	if(obj) write("���޷����������ݻ١�\n");
	else write("������, ��ǿ�ĺڶ�.\n");

	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : dest [-r] <���֮���ƻ���>

���ô�һָ��ɽ�һ�����(object)���������(class)�Ӽ�������������������
������(����ָ�������������)����һ�βο�����������ʱ������½������롣

���� (admin) ������ֵ���ʦ������ -r ѡ���� ROOT_UID ���������������������
ʹ���ߡ�

�ο����ϣ� destruct(), clone
HELP
    );
    return 1;
}
