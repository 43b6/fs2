// by ACKY 06/01/00

#include <ansi.h>
#include <msg.h>

#define MAX_BUFFER	5120	// MAX ѶϢ���� = 5KB

int help( object me );

int main( object me , string arg )
{
        int msg_buffer;

	if( !arg )
		return help( me );

	if( sscanf( arg, "%d", msg_buffer )!=1 )
		return help( me );

	if( msg_buffer == 0 ) {
		me->delete_temp( "msg_buffer" );
		write( HIC"ϵͳ����ȡ���κ�ѶϢ��\n"NOR );
		return 1;
	}

	if( msg_buffer < sizeof(MSG) || msg_buffer>MAX_BUFFER ) {
		write( HIR"[ע��]"HIC" <���ѶϢ����> ��СֵΪ "HIY+sizeof(MSG)+HIC" , ���ֵΪ "HIY+MAX_BUFFER+HIC"��\n"NOR );
		return 1;
	}

	me->set_temp( "msg_buffer", msg_buffer );	
	write( HIC"����<���ѶϢ����>��Ϊ "HIY+msg_buffer+HIC"��\n"NOR );
	return 1;
}
        
int help( object me )
{
	write("
	msg_filter <���ѶϢ����> : �趨����ѶϢ֮���������

		   <���ѶϢ����> : ��λ byte

	���ѶϢ�������趨��<���ѶϢ����>, ���� "+MSG+" ȡ��, �Խ�Լ������
	��<���ѶϢ����>�趨Ϊ 0, ϵͳ����ȡ���κ�ѶϢ��
	ÿ������ʱ, ϵͳ���Զ��趨<���ѶϢ����>Ϊ 0��

	[����] msg_filter 100
	[˵��] �趨����ѶϢ֮�������Ϊ 100 bytes��

	                                        by ACKY 06/01/2000
");
        return 1;

}

