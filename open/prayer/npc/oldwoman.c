//oldwoman.c

#include <ansi.h>

inherit NPC;
void create()
{
    set_name("�����ϸ�",({"oldwoman"}));
    set("title", "��ֵ�");
    set("gender", "Ů��");
    set("age",72);
    set("attitude","friendly");
    set("long",@LONG
��ֵ��ϸ���!!������˵���������,����ȴ����û��������.....

LONG);
 
    set("combat_exp",50);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",30);   
    set("chat_msg", ({
     HIC+"�ϸ�˵: ��а����?�ֲܿ���!!ǧ��Ҫ��ȥѽ!!\n"+NOR,
             "�ϸ�˵: ��˵ʥ�������ϲ��������ȥ�����!!\n",
          HIC+"�ϸ�˵: ʥ�������Ӧ����ͨ�����ߵ��ܵ���!!\n"+NOR,
    }) );
    set("inquiry",([
    "��а����":HIC+"��תһ��ʯͷ(turn stone),���ƿ�ʯ��(push wall)�Ϳ��Խ�ȥ��!!\n"+NOR,
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
