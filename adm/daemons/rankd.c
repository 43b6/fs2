// rankd.c

#include <ansi.h>

mapping wiz_rank = ([
	"(admin)": 		({ HIW "�� ��  �� ��" NOR, HIW "�� ��  �� ��" NOR }),
	"(arch)": 		({ HIY "�� ��  �� ��" NOR, HIY "�� ��  �� ��" NOR }),
	"(wizard)": 	({ HIG "�� ��  �� ��" NOR, HIG "�� ��  �� ��" NOR }),
	"(apprentice)":	({ HIC "�� ��  �� ��" NOR, HIC "�� ��  �� ��" NOR }),
]);

string query_rank(object ob)
{
	string level="";
	string guild="";
	if( ob->is_ghost() ) return HIB "�� ��  �� ��" NOR;
	if( ob->query("class") ) guild=ob->query("class");
	if(ob->query("class_level")) level="-"+ob->query("class_level");
	if(ob->query("gender")=="Ů��")
	{
		if(wizhood(ob)!="(player)")
			return to_chinese("f_"+wizhood(ob));
		if(!ob->query("class_level"))
		  if(!ob->query("class")) return "�� ƽ  �� ��" NOR;
		    return to_chinese("f_"+guild+level);
	}
	else
	{
		if(wizhood(ob)!="(player)")
			return to_chinese(wizhood(ob));
		if(!ob->query("class_level"))
		  if(!ob->query("class")) return "�� ƽ  �� ��" NOR;
		    return to_chinese(guild+level);
	}
}

// ƽʱ�ƶԷ�
string query_respect(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/respect")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "bonze":
				if( age < 18 ) return "Сʦ̫";
				else return "ʦ̫";
				break;
			case "taoist":
				if( age < 18 ) return "С�ɹ�";
				else return "�ɹ�";
				break;
			case "officer":
				return "����";
				break;
			default:
				if( age < 18 ) return "С����";
				else if( age < 50 ) return "����";
				else return "����";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "bonze":
				if( age < 18 ) return "Сʦ��";
				else return "��ʦ";
				break;
			case "taoist":
				if( age < 18 ) return "����";
				else return "����";
				break;
			case "officer":
					return "����";
					break;
			case "fighter":
			case "swordsman":
				if( age < 18 ) return "С�ϵ�";
				else if( age < 50 ) return "׳ʿ";
				else return "��ǰ��";
				break;
			default:
				if( age < 20 ) return "С�ֵ�";
				else if( age < 50 ) return "׳ʿ";
				else return "��ү��";
				break;
			}
	}
}

// սʱ�Ƶ���
string query_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "bonze":
				return "����";
				break;
			case "taoist":
				return "��Ů";
				break;
			case "officer":
				return "��͢���߹�";
				break;
			default:
				if( age < 30 ) return "С����";
				else return "����̫��";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "bonze":
				if( age < 50 ) return "��ͺ¿";
				else return "��ͺ¿";
				break;
			case "taoist":
				return "��ţ����";
				break;
			case "officer":
				return "��͢���߹�";
				break;
			default:
				if( age < 20 ) return "С���˵�";
				if( age < 50 ) return "����";
				else return "��ƥ��";
				break;
			}
	}
}

// ƽʱ�Գ�
string query_self(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "bonze":
				if( age < 50 ) return "ƶ��";
				else return "����";
				break;
			default:
				if( age < 30 ) return "СŮ��";
				if( age >=30 && age < 50 ) return "���";
				else return "����";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "bonze":
				if( age < 50 ) return "ƶɮ";
				else return "����";
				break;
			case "taoist":
				return "ƶ��";
				break;
			default:
				if( age < 50 ) return "����";
				else return "��ͷ��";
				break;
			}
	}
}

// ս��ʱ�Գ�
string query_self_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self_rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "bonze":
				if( age < 50 ) return "ƶ��";
				else return "����";
				break;
			default:
				if( age < 30 ) return "������";
				else return "����";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "bonze":
				if( age < 50 ) return "�������";
				else return "�Ϻ�����";
				break;
			case "taoist":
				return "��ɽ��";
				break;
			default:
				if( age < 50 ) return "��ү��";
				else return "����";
				break;
			}
	}
}
