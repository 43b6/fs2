//�ʳǽ�����

#include </open/capital/capital.h>
#include <ansi.h>

inherit NPC;
int accept_kill(object who);

void create()
{
          set_name("��������",({"soldier"}) );
        set("gender","����");
        set("age",25);
        set("class","soldier");
        set("str",30);
        set("long","�ʳǽ������Ǳ����ʹ����ȷ�, ��Ϊ����ѡһ�ľ�Ӣ��\n");

        set("combat_exp",3000000);
        set("max_gin",1000);
        set("max_kee",10000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",10000);
        set("sen",1000);
        set("max_force",20000);
        set("force",20000);
        set("force_factor",20);
        set_skill("blade",120);
        set_skill("parry",120);
        set_skill("dodge",120);
        set_skill("godblade",120);
        set_skill("bss-steps",120);
        map_skill("dodge","bss-steps");
        map_skill("blade","godblade");
        setup();
        carry_object(CAP_OBJ"Hblade")->wield();
        carry_object(CAP_OBJ"Ns_boots")->wear();
        carry_object(CAP_OBJ"carmor")->wear();
        carry_object(CAP_OBJ"ironshield")->wear();
        carry_object(CAP_OBJ"ironarmband")->wear();

}
void init()
{
        add_action("do_fight","fight");
        add_action("do_fight","kill");
        if(this_player()->query("class")=="officer" && userp(this_player()))
        {
        call_out("check1",1);
        add_action("do_nod","nod");
        }
        else
        if(userp(this_player()))
        call_out("check2",1);
}


int do_fight(string arg)
{
        object who;
        who = this_player();

        if( !arg || (arg!="soldier" && arg!="castle soldier") )
                return notify_fail("���빥��˭��\n");
        else {
                kill_ob(who);
tell_object(users(),HIR "����������У�����Ӳ���ʳǣ��������ɱ���⣡��\n" NOR);
//                accept_kill(who);
        }

        return 1;
}
/*
int accept_kill(object who)
{
        int i;
        object ob, guard;
        ob = this_object();

        if( !present("king taigan", environment(ob)) ) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����̫�࣡\n\n"NOR);
     for(i=0;i<2;i++)
     {
        guard = new("/open/capital/room/sroom/npc/taigan1");
        guard->move(environment(ob));
        guard->kill_ob(who);
        }}
     tell_object(users(),HIR "����̫���У�����Ӳ���ʳǣ��������ɱ���⣡��\n" NOR);
        return 1;
}
*/
int check1()
{
        object me=this_player();
        int power;
        power=me->query("max_officer_power",1);
        if(power>=2000)
        {
                if(me->query_temp("can_in"))
                {
                command("say ���������롣\n");
                return 1;
                }
                command("say ����Ҫ������ʥ��?\n");
                return 1;
        }
        else
        {
                command("say ��Ĺٽ�̫�ͣ�û�취���ʳǡ�\n");
                return 1;
        }
}
int do_nod()
{
        object me=this_player();
        int power;
        power=me->query("max_officer_power",1);
        if(power>=2000)
        {
                me->set_temp("can_in",1);
                command("say ���������롣\n");
                return 1;
        }
        else
        {
                tell_object(me,"��������ͷ���Ҫ���ˣ����Ƕ�û�á�\n");
                return 1;
        }
}
int check2()
{
        object me=this_player();
        command("say �ʳ��ص�������˵���ͽ��ĵط����������!!!\n");
}
