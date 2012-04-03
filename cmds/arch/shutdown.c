// shutdown.c ���� by babe

#include <net/daemons.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string wiz_status;
	object *user, link_ob, pal;
	int i;

	if( me != this_player(1) ) return 0;
	
	wiz_status = SECURITY_D->get_status(me);
	if( wiz_status!="(manager)" && wiz_status != "(admin)" && wiz_status != "(arch)" )
		return notify_fail("ֻ�� (arch) ���ϵ���ʦ������������" + MUD_NAME + "\n");

//message( "system", "��Ϸ�������������Ժ�һ������ login ��\n", users() );

	user = users();
	for(i=0; i<sizeof(user); i++) {
		if( !environment(user[i]) ) continue;
		if( pal=user[i]->query_temp("pal") )
			pal->save();
		user[i]->save();
		link_ob = user[i]->query_temp("link_ob");
		if( objectp(link_ob) ) link_ob->save();
	}

	if( find_object(DNS_MASTER) ) DNS_MASTER->send_shutdown();

	shutdown(0);
	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : shutdown
ָ��˵�� :
    ���������ϵͳ����ֹͣһ�ж���, ��Ȼ, �����������
    ��������һ��, �����Ƚ���ҵ����ϴ浵, Ȼ���ٹػ�.
�����ο� :
    reboot
HELP
  );
  return 1;
}
