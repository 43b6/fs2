// away.c by ACKY

int help(object me);
int main( object me, string arg )
{
	int i;
	string msg;
	
    if(!arg && !me->query("away"))
        return help(me);
    if( !arg && (me->query("away")[0]=='1') ) {
		msg = me->query("away")[1..-1];
		me->set( "away", "0"+msg );
		write( "��� away ״̬��\n");
	}
	else if( !arg ) {
		msg = me->query("away")[1..-1];
		me->set( "away", "1"+msg );
		write("���� away ״̬��\n"); 
	}
  	else {
		me->set( "away", "1"+arg );
    		write("���� away ѶϢ��� " + arg + "��\n");
 	}
	me->delete("away_msg");
  	return 1;
}

int help( object me )
{
	write("
	away <ѶϢ> : �趨 away ״̬��

	������ tell ��ʱ, ϵͳ�Զ������ظ� away ��ѶϢ��

	������ away ״̬, ֻҪ����һ�� away ָ���ɽ����
	���������� away ѶϢ, ֻҪֱ���� away ָ��, ������
	�ظ�����ѶϢ, ��ɽ��� away ״̬��

	[����] away ��ȥһ�²�����
	[˵��] ������ tell ��ʱ, ������\"��ȥһ�²�����\"��

	                                        by ACKY 06/01/2000
");
        return 1;

}
