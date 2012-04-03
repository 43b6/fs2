// clan_cmds.c by ACKY 04/04/00

#include <ansi.h>
void print_cmd( string cmd , int rank , string str );
mapping cmds = ([]);
int sum=0,i;
string str_cmds="";

int main( object me )
{
        int o=0;
        int len;
        mixed *file;
        string clan_name,clan_id,top,list,sort,*money,*members,*area;
        file = get_dir("/cmds/clan/",-1);
        sum = sizeof(file);
        for( i=0; i<sum; i++ )
                if( file[i][1]!=-2 )    {
                        len=sizeof(file[i][0]);
                        cmds[o] = file[i][0][0..len-3];
                        o++;
                }
        str_cmds += sprintf(HIM"\n      ����.__________"HIW"����ָ�"HIM"__________.\n\n");

        str_cmds += sprintf(HIY"\n�� һ�� -\n"NOR);
	print_cmd( "c_goto"    , 3, "����˲���ƶ�" );
	print_cmd( "c_home"    , 4, "�ص������ܲ�" );
	print_cmd( "c_state"   , 5, "��ѯ����״̬" );
	print_cmd( "c_donate"  , 7, "����Ǯׯ��Ǯ" );
	print_cmd( "c_deposit" , 7, "����Ǯׯ��Ǯ" );
	print_cmd( "c_withdraw", 7, "����Ǯׯ��Ǯ" );
	print_cmd( "c_in"      , 8, "�������" );
	print_cmd( "c_out"     , 8, "�뿪����" );
	print_cmd( "c_cmds"    , 8, "����ָ�" );
	print_cmd( "c_index"   , 8, "����˵���ļ�" );
	print_cmd( "c_list"    , 8, "����ռ��������" );
	print_cmd( "c_view"    , 8, "��ѯ���ϰ������" );

	str_cmds += sprintf( HIC"\n�� ����ά�� -\n"NOR );
	print_cmd( "c_board"    , 1, "��������" );
	print_cmd( "c_set"	, 2, "�趨��������" );
	print_cmd( "c_room_make", 3, "������ɵ���" );
	print_cmd( "c_room_del" , 3, "ɾ�����ɷ���" );
	print_cmd( "c_room_link", 3, "�趨��������" );
	print_cmd( "c_room_own" , 3, "�趨ר������" );
	print_cmd( "c_room_des" , 7, "�趨��������" );
	print_cmd( "c_room_att" , 7, "�趨��������" );
	print_cmd( "c_room_item", 7, "�趨��������" );
	print_cmd( "c_build"    , 7, "��������" );
	print_cmd( "c_store"    , 7, "���������Ʒ" );
	print_cmd( "c_take"     , 7, "ȡ��������Ʒ" );

	str_cmds += sprintf( HIR"\n�� �����⽻ -\n"NOR );
	print_cmd( "c_passwd"   , 1, "�趨��������" );
	print_cmd( "c_doc"      , 1, "��д����˵��" );
	print_cmd( "c_tax"      , 2, "�趨����˰��" );
	print_cmd( "c_gatetax"  , 2, "�趨���ɹ�˰" );
	print_cmd( "c_gate"     , 2, "�趨բ��״̬" );
	print_cmd( "c_alert"    , 3, "�趨����״̬" );
	print_cmd( "c_prestige" , 3, "�趨��������" );
	print_cmd( "c_agree"    , 3, "�������" );
	print_cmd( "c_surrender", 3, "���" );
	print_cmd( "c_war"      , 3, "��ս" );
	print_cmd( "c_ally"     , 3, "ͬ��" );
	print_cmd( "c_forgive"  , 3, "������" );
	print_cmd( "c_arrest"   , 3, "����ͨ����" );
	print_cmd( "c_who"      , 7, "��ѯ���ɾ������" );

	str_cmds += sprintf( HIW"\n�� ���´��� -\n"NOR );
	print_cmd( "c_inherit", 1, "������λ" );
	print_cmd( "c_title"  , 1, "���ĳƺ�" );
	print_cmd( "c_jail"   , 3, "�������" );
	print_cmd( "c_member" , 4, "��������" );
	print_cmd( "c_appoint", 4, "����ĳ�˵�λ�׼�ְ��" );
	print_cmd( "c_banish" , 4, "��������" );
	print_cmd( "c_join"   , 4, "�������" );
	print_cmd( "c_hire"   , 4, "��ļ����Ӷ��" );
	print_cmd( "c_obj"    , 4, "װ������Ӷ��" );
	print_cmd( "c_move"   , 4, "�ƶ�����Ӷ��" );
	print_cmd( "c_order"  , 6, "�������" );

	if( wizardp(me) )       {
		str_cmds += sprintf( HIY"\n�� ��δ����ָ֮�� -\n"NOR );
		for( i=0; i<sum; i++ )  {
			if( cmds[i] )
				str_cmds+=sprintf("\t%s\n",cmds[i]);
		}
	}
	me->start_more(str_cmds);
	str_cmds="";
	return 1;
}

void print_cmd( string cmd , int rank , string str )
{
        string rank_str;
        for( i=0; i<sum; i++ )
                if( cmds[i]==cmd )      {
                        switch( rank ) {
                        case 1 : rank_str=HIW"��"NOR; break;
                        case 2 : rank_str=HIW"��"HIC+"��"NOR; break;
                        case 3 : rank_str=HIW"��"HIC+"��"HIY+"��"NOR; break;
                        case 4 : rank_str=HIW"��"HIC+"��"HIY+"��"HIG+"��"NOR; break;
                        case 5 : rank_str=HIW"��"HIC+"��"HIY+"��"HIG+"��"HIB+"��"NOR; break;
                        case 6 : rank_str=HIW"��"HIC+"��"HIY+"��"HIG+"��"HIB+"��"HIR+"��"NOR; break;
                        case 7 : rank_str=HIW"��"HIC+"��"HIY+"��"HIG+"��"HIB+"��"HIR+"��"HIM+"��"NOR; break;
                        case 8 : rank_str="������"; break;
                        }
                        str_cmds += sprintf("\t%-16s   %-22s   %-16s\n", cmd , str , rank_str );
                        map_delete( cmds , i );
                        break;
                }
}
