// rewriten from bully.c
// mercenary.c by powell

inherit NPC;
int do_say();
void create()
{
        set_name("��ʦ", ({ "Mercenary","mercenary" }) );
        set("race", "����");
        set("gender", "����");
        set("age", 25);
        set("long","�����ھֵ���ʦ,������һ�㱾��,��ͨ���������ֲ������Ե�.\n"+
        "����Ϊ�������Լ�������ѧ�����ڵ�����˶���.\n");
        set("cps", 5);
        set("str", 28);
        set("cor", 20);
        set("kar",10);
        set("spi", 1);

        set( "inquiry", ([
             "here" : "����������ھֵ�����,��ûʲô�¾Ͳ�Ҫ�ڴ˶���."
             ]));               
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
        (: this_object(),"do_say" :),
        "��ʦ˵�� : ��һｻ���Ҿͺ���, ���Ƕ�����֡�\n",
         }) );
                
        set_temp("apply/attack", 1);
           set_skill("unarmed",40);
        set("combat_exp",280);
        setup();
        add_money("silver",3);
}

int do_say()
{
        object me=this_player();
        tell_room(environment(this_object()),
        "��ʦ�ȵ����ɶ�!! "+RANK_D->query_rude(me)+"���ǻ�Ĳ��ͷ�����? �����������ھ�����Ұ��\n");
}
        
void defeated_enemy(object ob)
{
        say("[36m��ʦ��Цһ���� : û����Ҳ�ҵ�������Ұ��[0m\n");
        remove_killer(ob);
}        
