inherit NPC;
void create()
{
    set_name("С�к�",({"guard boy","boy"}) );
    set("gender", "����");
    set("age",25);
    set("attitude", "peaceful");
    set("long","ԭ��̱�����͵�С�ã�ͨ���Ǹ��������ڴ�ɨ��׼������\�Ĺ�����\n");
    set("kee",4100);
    set("force",5000);
    set("max_force",5000);
    set("max_kee",4100);
    set("force_factor",10);
    set("combat_exp",1300000);
    set_skill("blade",120);
    set_skill("move",500);
    set_skill("dodge",500);
    set_skill("mogi-steps",500);
    map_skill("dodge","mogi-steps");
    map_skill("move","mogi-steps");
    set_skill("mogi-strike6",100);
    map_skill("parry","mogi-strike6");
    map_skill("blade","mogi-strike6");
    set("chat_chance", 1);
    set("chat_msg", ({
"С�к�����˵����ʦ��˵ԭ�������Ĺ�����������ԨԴ���ǲ��Ǻܾ�ѽ��",
}));
    setup();
add_money("gold",5);
create_family("ԭ���",64,"����");
carry_object("/daemon/class/blademan/obj/nine-blade")->wield();
}
