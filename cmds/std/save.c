// save.c
// ���ӱ��ݵ��Ĵ���
// by wade (1996 6 6)
inherit F_CLEAN_UP;
#include <ansi.h>

int main(object me, string arg)
{
    string id, src, dst ,room_name;
	// object link_ob, env=environment(me);
	object link_ob, env;

	seteuid(getuid());
	env = environment(me);

	if(env) room_name=file_name(env);
	if( !objectp(link_ob = me->query_temp("link_ob")) ) {
		// return notify_fail("�㲻�Ǿ����������߽��룬���ܴ��档\n");
		me->set_temp( "link_ob", me );
		link_ob = me;
	}
	if( me->save() ) {
		if( env->query("valid_startroom") ) {
			me->set( "startroom", base_name(env) );
			write( HIW"�����´����߽���ʱ�����Ӵ˴��������ռ䡣\n"NOR );
		}
		else if( me->query("clan") )
			if( base_name(env) == CLAN_D->clan_query( me->query("clan/id"), "home" ) ) {
				me->set( "startroom", base_name(env) );
				write( HIW"�����´����߽���ʱ�����Ӵ˴��������ռ䡣\n"NOR );
			}
		write( HIY"����������ϡ�\n��ǵ��� save -1 �� save -2 ���ݵ�����\n"HIC"����ʱ�� help news ���ۿ�����֮�κ������춯��:)\n"NOR );
	}
	else return notify_fail( "\n\t�浵ʧ��...\n\n" );
	if( me != link_ob )
		link_ob->save();
	id = me->query("id");
	seteuid(ROOT_UID);
	src = sprintf( "/data/user/%s/%s.o", id[0..0], id );
	dst = sprintf( "/data/backup/user/%s", id[0..0] );
	if( file_size(dst) != -2 ) // Ŀ¼���� -2���յ����ڴ��� -1
	mkdirs(dst); // �����ģ����Զ�һ��һ�� mkdir
	dst += "/" + id + ".o";
	if( !cp( src, dst ) )
		return notify_fail( "�޷������������ϵ�.\n" );
	src = sprintf( "/data/login/%s/%s.o", id[0..0], id );
	dst = sprintf( "/data/backup/login/%s", id[0..0] );
	if( file_size(dst) != -2 )
	mkdirs(dst);
	dst += "/"+id+".o";
	if (!cp (src, dst))
	  return notify_fail("�޷������������ϵ�.\n");

	if (arg == "-1" || arg == "-2") {
	if( me->query("mud_age") < 10800 ) {
	  return notify_fail("������̫С�޷������");}
	  src = sprintf ("/data/user/%s/%s.o", id[0..0], id);
	  dst = sprintf ("/data/backup2/user/%s", id[0..0]);
	  if (file_size(dst) != -2)
	    mkdirs(dst);
	  dst += "/"+id+".o";
	  if (!cp (src, dst))
	    return notify_fail("�޷������������ϵ�.\n");
	}

	if (arg == "-1" || arg == "-2") {
	  src = sprintf ("/data/login/%s/%s.o", id[0..0], id);
	  dst = sprintf ("/data/backup2/login/%s", id[0..0]);
	  if (file_size(dst) != -2)
	    mkdirs(dst);
	  dst += "/"+id+".o";
	  if (!cp (src, dst))
	    return notify_fail("�޷������������ϵ�.\n");
	}
	write (HIW"�������� ok.\n"NOR);
	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : save [-1|-2]

ʹ��˵�� :
	����ϵͳ�᲻���ڰ���Ҵ�������ϣ���������
    ��ʱ���浵һ��������Ҫ����汸�ݵ��Ļ�������
    ����Ϊ: save -1 �������һ�ݱ��ݵ����� save -2
    ����ڶ��ݱ��ݵ���
	Ҳ���ǣ�ƽ��ϵͳ�����浵����Ϊ����������
    �ݻ����������ᷢ���������ʧ��save -1 ����˻�
    ����֮�⣬�������һ�ݱ��ݵ���Ҳ����һ�δ�����
    �ݣ��� save -2  ��������ݡ����ڶ�д��������
    �� lag  ����Ҫԭ��֮һ�������Ǳ�Ҫ����ñ�
    �� save -1��save -2��
	ͨ��������һ������һ�����ʱ��Ŵ��汸��
    ������ͨ�� save Ŀǰ���Զ����棬���ⲻ��������
    �����һ�����Ѫ��١����⣬�� bug  �����ʧ��
    ʱ�򣬿���Ҫ���ñ��ݵ��Ȼ�����Ҳ����˵ :
        ����㷢�ֵֹֹ�ʱ������ʹ�� save -1����
    ��Ҫʹ�� save -2 ���ǹ����ϡ������ѱ��ݵ�Ū
    ������
HELP
	);
	return 1;
}
