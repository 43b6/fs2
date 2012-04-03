
int help();

int main(object me, string str)
{
        string  flag, okip, *ip_list, *ips;
        int     i;

        if( !str ) {
                if(!me->query("ok_ip"))
                        write( "�㻹û�� ok-ip.\n");
                else
                        write( "��� ok-ip �����趨Ϊ :\n"+"  "+
                                (string)me->query("ok_ip")+"\n" );
                return 1;
        }

        if( (string)me->query("name") == "guest" )
                return notify_fail("�㲻�ܰ� guest �� okip!!\n");

        if( sscanf(str,"-%s %s", flag, okip) != 2 )
                return help();

        if( me->query("ok_ip") )
                ip_list = explode( me->query("ok_ip"), ":" );
        else 
                ip_list = ({});

        if( okip == "now" )
                ips = ({ (string)me->query("ip") });
        else if( okip )
                ips = explode(okip,":");

        if( flag == "s" )
                ip_list = ips;
        else if( flag == "a" ) {
                for( i=0; i<sizeof(ips); i++ )
                        if( member_array(ips[i], ip_list) == -1 )
                                ip_list += ({ ips[i] });
        } else if( flag == "d" ) {
                for( i=0; i<sizeof(ips); i++ )
                        if( member_array(ips[i], ip_list) != -1 )
                                ip_list -= ({ ips[i] });
        } else return notify_fail("Wrong flag!\n");

        me->set("ok_ip", implode(ip_list,":"));

        write("OK-IP �����趨Ϊ :\n"+"  "+ me->query("ok_ip")+"\n");
        me->save();
        return 1;
}

int help()
{

        write(@C_HELP
ָ���ʽ��okip <-a | -d | -s> <IP:IP:...>

��ָ����������趨�Լ��� okip list��ֻ�д���Щ IP address ��
���������˲���ʹ��������

����˵����
    -a                          ����
    -d                          ɾ��
    -s                          �����趨

IP ��ʽ����Ϊ 140.113.23.32 �� 140* �� *23 �� cis* �� *pc ��
��������ʹ�� "?"�����޸����κβ��������ᴫ�����е� okip list
���� IP = now ����ΪĿǰ�� login IP��

������ȷ������ ip name�����ǵ� ip name ������������ʱ�� ��ʹ
�� ip number �Ա������

������
    okip -a aaa.bbb.ccc.ddd     �� aaa.bbb.ccc.ddd ���� okip �
    okip -d aaa.bbb.ccc.ddd     �� aaa.bbb.ccc.ddd �� okip ��ɾ����
    okip -s aaa.bbb.ccc.ddd eee.fff.ggg.hhh
                                ��ԭ���� aaa.bbb.ccc.ddd �滻Ϊ
                                eee.fff.ggg.hhh��

ʹ�ø�ʽ: okip [-a|-d|-s] [IP:IP:...]

    ��ָ����������趨���Լ��� okip LIST��ֻ�д���Щ IP address ������
�����˲���ʹ��������� ��

����˵��: a - ���ӡ�d - ɾ����s - �����趨��

    IP ��ʽ��Ϊ 140.113.23.32 �� 140* �� *23 �� cis* �� *pc �ȡ�
������ʹ��"?"�����޸����κβ������ᴫ�����е� okip list��
�� IP = now ����ΪĿǰ�� login IP��

C_HELP
        );
}
