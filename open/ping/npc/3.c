// ����ɽկ
inherit NPC;
void create()
{
        set_name("����ͷ",({"soldier leader","leader"}));
set("long","
������С�����ǵ�ͷͷร���Ȼ˵��ͷͷ��Ҳֻ�Ǳ�С�����Ƕ����Щ���°��ˣ���
ɽկ�г�������ͷĿ���⣬����������ˣ�����һ��ҫ�����������ӣ��������һ�١�
\n");
        set("gender","����");
        set("combat_exp",750000);
        set("attitude","peaceful");
        set("age",25);
        set("class","soldier");
        set("str",30);
        set("cor", 30);
        set("int", 30);
        set("con", 30);
        set("kar", 30);
        set("max_force",1000);
        set("force",1000);
        set("max_kee",5000);
        set("kee",5000);
        set("force_factor",12);
        set_skill("stabber",85);
        set_skill("parry",65);
        set_skill("dodge",65);
        set_skill("six-fingers",85);
        set_skill("linpo-steps",65);
        map_skill("stabber","six-fingers");
        map_skill("dodge","linpo-steps");
        map_skill("parry","six-fingers");
        set("chat_chance",5);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
        setup();
        carry_object("/open/ping/obj/b-fan")->wield();
        add_money("silver",10);
}

