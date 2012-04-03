// dremagic.c //cgy

inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="magic"; }

int valid_learn(object me)
{
        if( (int)me->query_skill("magic") < (int)me->query_skill("dremagic")/2 )
                return notify_fail("��ķ�����Ϊ�������޷���������������������\n");
        return 1;
}

string conjure_magic_file(string magic)
{
        return CLASS_D("dancer") + "/dremagic/" + magic;
}
int conjure_magic (object me, string magic, object target)
{
	if( file_size(conjure_magic_file(magic)+".c") > 0 )
		return conjure_magic_file(magic)->conjure(me,target);
	return notify_fail("û������������\n");
}


int practice_skill(object me)
{       
        object bug;

        if( bug = me->query_temp("mind_bug") )
                return notify_fail("��Ļ��ǻ�û��ȫ���ջأ��Ͽ�ɱ�����"
                        + bug->name() + "�ɣ�\n");

        if( (int)me->query("atman") < 10 )
                return notify_fail("�������������\n");

        if( (int)me->query("gin") < 30 )
                return notify_fail("��ľ����޷����С�\n");

        me->add("atman", -10);
        me->receive_damage("gin", 30);

        write("���Ŀ�����������⣬��ʼ��ϰ���������еķ���....\n");
        if( random((int)me->query("gin")) < 5 ) {
                int rnd;
                rnd = random(me->query_skill("magic", 1));
                if( rnd < 10 )  bug = new("/obj/npc/mind_bug");
                else                    bug = new("/obj/npc/mind_beast");

                write("��������˼һ�ң������һֻ��Ŀ������" + bug->name() + "��\n");
                bug->move(environment(me));
                bug->kill_ob(me);
                me->fight(bug);
                me->set_temp("mind_bug", bug);
                bug->set("owner", me->query("id"));
                return notify_fail("��Ļ�������" + bug->name() + "��ס����Ѡ������ɣ�\n");
        }       
        else return 1;
}
