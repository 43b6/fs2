// dog.c by babe

#include <ansi.h>
#include "/open/open.h"

inherit NPC;

void create()
{
        seteuid(getuid());
        set_name( "Ұ��", ({ "dog" }) );
        set("race", "Ұ��" );
        set("age", 3 );
        set("long", "һֻ�����������Ұ����\n");
        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp( "apply/attack", 3 );
        set_temp( "armor", 50 );
        set( "combat_exp", 240 );
        carry_object(CENTER_OBJ"bonze");
        setup();
}



