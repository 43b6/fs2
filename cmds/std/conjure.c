inherit F_CLEAN_UP;

int main( object me, string arg )
{
	string	magic, spl, trg;
	object	target;
	
	seteuid(getuid());

	if( me->is_busy() && !wizardp(me) )
		return notify_fail( "�������ۼ�����, ��������һʱ���Է�����\n" );

   if(me->query("atman") < 0 ) {
   me->set("atman",0);
   tell_object(me,"û��������ʲѽ?\n");
   return 1;
   }
	if( environment(me)->query("no_magic") && !wizardp(me) )
		return notify_fail( "�˴��޷�ʹ�÷�����\n" );

	if( !arg )
		return notify_fail( "ָ���ʽ: conjure <����> [on <Ŀ��>]\n" );
	if( sscanf( arg, "%s on %s", spl, trg )==2 ) {
		target = present( trg, environment(me) );
		if( environment(me)->query("no_fight") || environment(me)->query("no_kill") )
			return notify_fail( "�˴��޷�ʹ�÷�����\n" );
		if( !target )
			return notify_fail( "����û�� " + trg + "��\n" );
		if( !living(target) )
			return notify_fail( "���������\n" );
		if( target->query("no_kill") )
			return notify_fail( "�㲻�ö���ʩ����\n");
	}
	else {
		spl = arg;
		target = 0;
	}

	spl = replace_string( spl, " ", "_");

	if( stringp( magic = me->query_skill_mapped("magic") ) )
		return (int)SKILL_D(magic)->conjure_magic( me, spl, target );
	return notify_fail( "������ enable ָ��ѡ����Ҫʹ�õķ���ϵ��\n" );
}

int help (object me)
{
        write(@HELP
ָ���ʽ��conjure <��������> [on <����>]
 
ʩ���������Ҫָ��<��������>��<����>����п��ޡ�
����ʹ��ĳһ������֮ǰ����������� enable ָ����ָ����Ҫʹ�õķ���ϵ��
 
HELP
        );
        return 1;
}
