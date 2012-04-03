// gargoyle.c

#include <ansi.h>
#include <login.h>

inherit NPC;

string *death_msg = ({
        HIW "���޳�˵����ι�������ģ����ʲô���֣�\n\n" NOR,
        HIW "���޳���������۹ⶢ���㣬����Ҫ�������һ���Ƶġ�\n\n" NOR,
        HIW "���޳����ߡ���һ�����������ͳ�һ�����ʲ�Ķ��������š�\n\n" NOR,
        HIW "���޳��x�ϲ��ӣ�˵�����ף�����δ������ô���ܣ�\n\n" NOR,
        HIW "���޳�ɦ��ɦͷ��̾�������˰��ˣ����߰ɡ�\n\n"
                "һ�������Ũ��ͻȻ���֣��ܿ�ذ�Χ���㡣\n\n" NOR,
});

void create()
{
        set_name("���޳�", ({ "white gargoyle", "gargoyle" }) );
        set("long",
                "���޳����ų�������ͷ�����㣬���׵����Ͽ������κ�ϲŭ���֡�\n");
        set("attitude", "peaceful");
        set("random_move",4);
        set("chat_chance", 15);
        set("chat_msg", ({
                (: this_object(), "random_move" :),
                "���޳�����һ����������������������������ע��������ʱ�򣬵�����һ�ۡ�\n",
                "���޳��ѳ�������ͷ��������������������Լ��ְ��ֳ�����ָ��\n"
        }) );
        set("age", 217);
        set("combat_exp", 20000);
        set("max_gin", 900);
        set("max_kee", 900);
        set("max_sen", 200);
        set_skill("dodge", 40);
        set_skill("unarmed", 40);
        setup();
}

void init()
{
        ::init();
        if( !previous_object()
        ||      !userp(previous_object())
        ||      wizardp(previous_object()) ) return;
        call_out( "death_stage", 5, previous_object(), 0 );
}

void death_stage(object ob, int stage)
{
        if( !ob || !present(ob) ) return;

        tell_object(ob, death_msg[stage]);
        if( ++stage < sizeof(death_msg) ) {
                call_out( "death_stage", 5, ob, stage );
                return;
        } else{
/*����������water��food���� by chan 2002 /08 /19*/
        if(!COMBAT_D->death_effect(ob))
          write_file("/u/b/bss/record/no_death_effect",
            sprintf("%s���˵���û�п�ֵ!!\n",geteuid(ob)));
                ob->reincarnate();
        DEATHROOM->end_death(ob);
	ob->set("food", ob->max_food_capacity());
    ob->set("water", ob->max_water_capacity());
    if(ob->query("have_get_rest"))
      ob->move("/open/wiz/guilty_room");
    else
        ob->move(REVIVEROOM);
        message("vision",
                "���Ȼ����ǰ�����һ����Ӱ����������Ӱ�ֺ����Ѿ�������\n"
                "�ܾ��ˣ�ֻ����һֱû������\n", environment(ob), ob);
    }
}
