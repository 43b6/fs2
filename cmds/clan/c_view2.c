// ����ָ� cview ����֮�������а���ְλһ���� by ~babe~ (Сѩ��) ^O^

#include <ansi.h>
inherit F_CLEAN_UP;

void second( object *user , string str );
string area( object me );
int sort_rank(object ob1, object ob2);
int sort_exp(object ob1, object ob2);
int help( object me );

int main( object me, string str )
{
	object  *user;
	if( !str )
		if( me->query("clan") )
			str = me->query("clan/name");
                else
                        return help(me);

        user = filter_array(users(), "filter_clan", this_object(), str);
        user = sort_array(user, "sort_exp",  this_object());
	second( user , str );
	return 1;
}

void second( object *user , string str )
{
	int     i, count, state;
	string  list, CO, state_str, list2;
	user = sort_array(user, "sort_rank", this_object());
        i = sizeof(user);
        list = sprintf( HIG"��"HIY"%|10s"HIG"��"HIC" ���ϰ��� "NOR"-\n", str );
	list+= "������������������������������������������������������������������������������\n";
	count = 0;

        while( i-- )
        {
                switch(user[i]->query("clan/rank")) {
	case 1  :       CO = HIW + "��";        break;
	case 2  :       CO = HIC + "��";        break;
        case 3  :       CO = HIY + "��";        break;
        case 4  :       CO = HIG + "�d";        break;
        case 5  :       CO = HIM + "��";        break;
        case 6  :       CO = HIB + "��";        break;
        case 7  :       CO = HIR + "��";        break;
		default :       CO = NOR + "��";        break;
		}

        if(this_player())
        if( wizardp(user[i]) && !wizardp(this_player()))
			continue;
		if( wiz_level(this_player())<6 && user[i]->query("env/����") && wiz_level(user[i]) && wiz_level(user[i]) > wiz_level(this_player()) )
		{
		 continue;
		}
		state = 0;
		state_str = "";
		count++;

                list = sprintf( "%s"HIC"��"NOR"%|10s"HIC"��"NOR"%s%|10s%s"NOR"",
			list,
                        area(user[i]),
                        CO,
                        (user[i]->query("clan/title") ? user[i]->query("clan/title") : "--��ְ��--"), CO );
/*
		list2 = (user[i]->query("title") ? user[i]->query("title") : "" ) +
                        (user[i]->query("nickname") ? "��"+user[i]->query("nickname")+"��" : " " ) +
                        user[i]->query("name")+"("+user[i]->query("id")+")";
                if( strlen((list2))>80 )*/
                	list2 = (user[i]->query("nickname") ? "��"+user[i]->query("nickname")+"��" : " " ) +
                        	user[i]->query("name")+"("+user[i]->query("id")+")";
                list += list2;

		if( user[i]->query_temp("netdead") ) {
			state_str += HIR"(����)"NOR;
			state = 1;
		}
		if( !environment(user[i]) ) {
			state_str += HIG"(���Ԫ)"NOR;
			state = 1;
		}
		if( in_edit(user[i]) ) {
			state_str += HIY"(�༭)"NOR;
			state = 1;
		}
		if( in_input(user[i]) ) {
			state_str += HIC"(��\��)"NOR;
			state = 1;
		}
		if( interactive(user[i]) && query_idle(user[i])>120 ) {
                	state_str += sprintf( "%s", HIM"(���� "+query_idle(user[i])/60+" ����)"NOR );
                	state = 1;
                }
                if( state ) list = list + /*"\t\t\t���� " +*/ state_str;
                list += "\n";
        }

	list +=	"������������������������������������������������������������������������������\n";
	list += sprintf( " Ŀǰ���Ϲ��� %d λ����, ϵͳ����: %s\n\n", count, query_load_average() );

        this_player()->start_more(list);
}

int help( object me )
{
	write("
	c_view <��������>

	��ʾ����ĳ����֮�������а���ְλһ����

	              ��������������
	�׼���ɫ˵����"HIW+"��"HIC+"��"HIY+"��"HIG+"��"HIM+"��"HIB+"��"HIR+"��"NOR"


	��ز�ѯָ��: c_who, c_state, c_list

                                                      by ACKY 03/27/00

");
	return 1;
}

string area( object me )
{
	int i;
	string path, tmp;

	if( environment(me) ) {
		if( CLAN_D->what_clan_area(me) == me->query("clan/id") )
			return "�������";
		path = file_name(environment(me));
	}
	else
		return "�� �� Ԫ";

	i = 6;
		while( i++ )
        {
          if(i >= sizeof(path)) break;
          if(path[i])
			if( path[i] == '/' ) {
				tmp = path[6..i-1];
				break;
			}
        }
	switch( tmp )
	{
	case "badman"	: return "�� �� ��";
	case "beggar"	: return "ؤ������";
	case "bonze"	: return "�� �� ��";
	case "capital"  : return "����  ��";
	case "center"	: return "������վ";
	case "clan"	: return "���ɵ���";
	case "dancer"	: return "�� �� ��";
	case "doctor"	: return "�� �� ��";
	case "death" 	: return "�ء�  ��";
	case "fire-hole": return "�����ý�";
	case "gblade"	: return "�� �� ��";
	case "god"	: return "�졡  ��";
	case "gsword"	: return "�� �� ��";
	case "hall"	: return "��������";
	case "killer"	: return "ɱ������";
	case "love"	: return "�� �� ��";
	case "marksman" : return "�� ɳ ��";
	case "mogi"  	: return "ħ��  ��";
	case "mulitpk"	: return "�䶷�᳡";
	case "newhand"  : return "��������";
	case "ping"	: return "ƽ �� ��";
	case "poison"   : return "ڤ��ħ��";
	case "port"	: return "�� �� ��";
	case "prayer"	: return "ʥ �� ��";
	case "scholar"	: return "�塡����";
	case "snow"	: return "ѩ �� ��";
	case "start"	: return "�� �� ��";
	case "steeple"	: return "�� �� ��";
	case "tailong"	: return "�� �� ��";
	case "tendo"	: return "�� �� ��";
	case "wind-rain": return "���ϸ��¥";
	case "wiz"	: return "�񡡡���";
	case "wu"	: return "�������";
	default		: return "�ˡ�����";
	}
}

int filter_clan(object ob, string name)
{
        if( ob->query("clan/name") == name )
                return 1;
        return 0;
}

int sort_rank(object ob1, object ob2)
{
	return ob2->query("clan/rank") - ob1->query("clan/rank");
}

int sort_exp(object ob1, object ob2)
{

	return (int)ob1->query("combat_exp") - (int)ob2->query("combat_exp");
}
