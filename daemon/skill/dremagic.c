// dremagic.c //cgy

inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="magic"; }

int valid_learn(object me)
{
        if( (int)me->query_skill("magic") < (int)me->query_skill("dremagic")/2 )
                return notify_fail("你的法术修为不够，无法领悟更高深的梦玄法鉴。\n");
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
	return notify_fail("没有这样法术。\n");
}


int practice_skill(object me)
{       
        object bug;

        if( bug = me->query_temp("mind_bug") )
                return notify_fail("你的魂魄还没有全部收回，赶快杀死你的"
                        + bug->name() + "吧！\n");

        if( (int)me->query("atman") < 10 )
                return notify_fail("你的灵力不够。\n");

        if( (int)me->query("gin") < 30 )
                return notify_fail("你的精神无法集中。\n");

        me->add("atman", -10);
        me->receive_damage("gin", 30);

        write("你闭目凝神，神游物外，开始修习梦玄法鉴中的法术....\n");
        if( random((int)me->query("gin")) < 5 ) {
                int rnd;
                rnd = random(me->query_skill("magic", 1));
                if( rnd < 10 )  bug = new("/obj/npc/mind_bug");
                else                    bug = new("/obj/npc/mind_beast");

                write("可是你心思一乱，变出了一只面目狰狞的" + bug->name() + "！\n");
                bug->move(environment(me));
                bug->kill_ob(me);
                me->fight(bug);
                me->set_temp("mind_bug", bug);
                bug->set("owner", me->query("id"));
                return notify_fail("你的魂魄正被" + bug->name() + "缠住，快把牠除掉吧！\n");
        }       
        else return 1;
}
