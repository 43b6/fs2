inherit NPC;
void create()
{
    set_name("СŮ��",({"cute girl","girl"}) );
    set("gender", "Ů��");
    set("age",25);
    set("attitude", "peaceful");
    set("long","��Ĺ�ɱ�����͵�С�ã�ͨ���Ǹ��������ڴ�ɨ��׼������\�Ĺ�����\n");
    set("kee",3600);
    set("force",5000);
    set("max_force",5000);
    set("max_kee",3600);
    set("force_factor",10);
    set("combat_exp",1300000);
    set_skill("sword",120);
    set_skill("move",500);
    set_skill("dodge",500);
    set_skill("mogi-steps",500);
    map_skill("dodge","mogi-steps");
    map_skill("move","mogi-steps");
    set_skill("mogi-strike7",100);
    map_skill("parry","mogi-strike7");
    map_skill("sword","mogi-strike7");
    set("chat_chance", 1);
    set("chat_msg", ({
"СŮ����������˵������ʦ��˵���Ǳ�����ԭ�����Щ�˱��־��롣",
}));
    setup();
carry_object("/open/hall/npc/obj/redsword")->wield();
add_money("gold",5);
create_family("��Ĺ��",63,"����");
}
