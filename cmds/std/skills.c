// skills.c

#include <ansi.h>
inherit F_CLEAN_UP;

string *skill_level_desc = ({
	BLU "��ѧէ��" NOR,
	HIB "��ͨƤë" NOR,
	HIB "��������" NOR,
	HIB "������" NOR,
	HIB "�������" NOR,
	CYN "�������" NOR,
	CYN "����似" NOR,
	CYN "�����뻯" NOR,
	HIC "�Ƿ��켫" NOR,
	HIC "һ����ʦ" NOR,
	HIW "��ɲ�" NOR
});

string *knowledge_level_desc = ({
	BLU "��ѧէ��" NOR,
	HIB "�����ž�" NOR,
	HIB "��֪һ��" NOR,
	HIB "������" NOR,
	HIB "����С��" NOR,
	CYN "�������" NOR,
	CYN "��Ȼ����" NOR,
	CYN "��Ȼ��ͨ" NOR,
	HIC "������˫" NOR,
	HIC "������" NOR,
	HIW "��ɲ�" NOR
});

string skill_level(string, int);

void create() { seteuid(getuid()); }
varargs int main( object me, string arg, int mode )
{
	object ob;
	mapping skl, lrn, map;
	string *sname, *mapped;
	int i;


	if(!arg)
		ob = me;
	else {
	  arg = lower_case(arg);
	  ob = present(arg, environment(me));
// Modify By Chun 09.22.1996 
//��Ϊ���޴��˻�����error message ��debug.log,����������
        if( wizardp(me) ) {
              arg = lower_case(arg);
              ob = present( arg, environment(me) );
              if( !ob )
                      ob = find_player(arg);
              if( !ob )
                      ob = find_living(arg);
              if( !ob )
                      ob = FINGER_D->acquire_login_ob(arg);
              if( !ob )
                      return notify_fail("��Ҫ�쿴˭��״̬?\n");
        }

	  if( !ob && !wizardp(me) ) return notify_fail("����û����ˡ�\n");

	}

// Modify By Spirits. 10.02.1995
	if ( ob!=me && !wizardp(me) && !ob->is_apprentice_of(me) &&
		!ob->query("guild_master") &&
		!me->is_apprentice_of(ob) )
	{
	  return notify_fail("ֻ����ʦ����ʦͽ��ϵ�����ܲ쿴���˵ļ��ܡ�\n");
	}

// Modify By ICE 10.19.1995
// ������ player ���� wizard �� skills..
// fixed by wade 1/4/1996

	if (wizardp(ob) && !wizardp(me))
	  return notify_fail("�㲻����͵����ʦ�ļ��ܡ�\n");

	if( mode==1 )
		ob = me->query_temp("pal");

	skl = ob->query_skills();
	if(!sizeof(skl)) {
		write( (ob==me ? "��" : ob->name()) + "Ŀǰ��û��ѧ���κμ��ܡ�\n");
		return 1;
	}
	write( (ob==me ? "��" : ob->name()) +"Ŀǰ��ѧ���ļ��ܣ�\n\n");
	sname  = sort_array( keys(skl), (: strcmp :) );
	
	map = ob->query_skill_map();
	if( mapp(map) ) mapped = values(map);
	if( !mapped ) mapped = ({});

	lrn = ob->query_learned();
	if( !mapp(lrn) ) lrn = ([]);
	
	for(i=0; i<sizeof(skl); i++) {
        if (file_size("daemon/skill/"+sname[i]+".c") == -1 && !wiz_level(me))
			ob->delete_skill(sname[i]);
		else
		printf("%s%s%-40s" NOR " - %-10s %3d/%5d\n", 
			(lrn[sname[i]] >= (skl[sname[i]]+1) * (skl[sname[i]]+1)) ? HIM : "",
			(member_array(sname[i], mapped)==-1? "  ": "��"),
			to_chinese(sname[i]) + " (" + sname[i] + ")",
			skill_level(SKILL_D(sname[i])->type(), skl[sname[i]]),
			skl[sname[i]], (int)lrn[sname[i]],
		);
	}
	return 1;
}

string skill_level(string type, int level)
{
	int grade;

	grade = level / 10;

	switch(type) {
		case "knowledge":
			if( grade >= sizeof(knowledge_level_desc) )
				grade = sizeof(knowledge_level_desc)-1;
			return knowledge_level_desc[grade];
		default:
			if( grade >= sizeof(skill_level_desc) )
				grade = sizeof(skill_level_desc)-1;
			return skill_level_desc[grade];
	}
}

int help(object me)
{
	write(@HELP
ָ���ʽ : skills [<ĳ��>]
ָ��˵�� :
           ���ָ���������(��)��ѯ��ѧ���ļ��ܡ�
           ��Ҳ����ָ��һ��������ʦͽ��ϵ�Ķ����� skills
           ���Բ�֪�Է��ļ���״����
           ��ʦ���Բ�ѯ�κ��˻� NPC �ļ���״����
HELP
    );
    return 1;
}


