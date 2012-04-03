// c_who.c by ACKY 04/04/00

#include <ansi.h>
inherit F_CLEAN_UP;
void second( object *user , string str );
int help( object me );

int main(object me)
{
	int len;
	string clan;
	object *user;
	if( !me->query("clan" ) ) return 0;
	clan = "n/"+me->query("clan/id");
	len = strlen(clan)+8;
	user = filter_array(users(), "filter_clan", this_object(), clan, len );
	user = sort_array(user, "sort_rank",  this_object());
	second( user , me->query("clan/name") );
	return 1;
}

void second( object *user , string str )
{
	int	i;
	string list, CO,COO;
	user = sort_array(user, "sort_rank", this_object());
        i = sizeof(user);
        list = HIY + "��" + str + "��" + HIC + "�������һ���� --\n\n" + NOR;
		while( i-- )	{
			switch(user[i]->query("clan/rank"))	{
	case 1  :       CO = HIW + "��";        break;
	case 2  :       CO = HIC + "��";        break;
        case 3  :       CO = HIY + "��";        break;
        case 4  :       CO = HIG + "�d";        break;
        case 5  :       CO = HIM + "��";        break;
        case 6  :       CO = HIB + "��";        break;
        case 7  :       CO = HIR + "��";        break;
	default :       CO = NOR + "��";        break;
			}
			if( user[i]->query("clan/name")==str )
				COO = HIW;
			else
				COO = HIR;
			list = sprintf("%s"HIC+"��%s%|10s"+HIC"��%s%|10s%s %s\n",
				list,COO,
				(user[i]->query("clan/name") ? user[i]->query("clan/name") : "��������"),CO,
				(user[i]->query("clan/title") ? user[i]->query("clan/title") : "��������"), CO, NOR +
				(user[i]->query("title") ? user[i]->query("title") : "" ) +
				(user[i]->query("nickname") ? "��"+user[i]->query("nickname")+"��" : " " ) +
				user[i]->query("name")+"("+user[i]->query("id")+")");
		}
		this_player()->start_more(list);
}

int help( object me )
{
	write("
	c_who

	��ʾ���ɾ������һ����

	��ز�ѯָ��: c_state, c_list, c_view
                                                      by ACKY 03/27/00

");
	return 1;
}

int filter_clan(object ob, string name, int len )
{
	object who;
	string tmp;
	tmp = ob->query("id");
	if(tmp)	{
		who = find_player(tmp);
		if(who)	{
			if(environment(who))
				if( file_name(environment(who))[9..len]==name )
					return 1;
		}
	}
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
