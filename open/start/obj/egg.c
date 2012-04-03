// egg.c by nako

inherit ITEM;
#include <ansi.h>

void create()
{
        set_name("������", ({ "egg" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("long", "һ������, ����Գ�����������(Throw)�ˡ�\n");
		set("unit", "��");
                set("value", 5);
                set("ʳ��", ([
                    "ʣ" : 2,
                    "��Ӧ" : 20,
                ]) );
	}
	setup();
}

void init()
{
     add_action("do_throw", "throw");
}

int do_throw(string str)
{
     object target,targetenv,me;
     me = this_player();
     if(!str || str == "" )
     {
         write("��һ�°Ѽ������ڵ���, �����ˡ�\n");
         tell_room( environment ( me ), me -> query("name") +
                   "һ�°�һ�������������ϴ��ơ�\n",
                    ( { this_object() , me } )
                  );
         destruct( this_object() );
         return 1;
     }
     target = present ( str, environment( me ) );
     if( !target ) target = find_player( str );
     if( !target ) {
                     write ("������˭��?\n");
                     return 1;
                   }
     if( !wizardp( me ) )
     {
     if( wizardp( target ) )
         {
           write("��Ѽ����߸ߵ��������....��󼦵��������ҵ����Լ����ϣ�\n");
           destruct( this_object() );
           return 1;
         }
     }
     targetenv = environment( target );
     if( target != me )
        write ("�����𼦵���" + target->query("name") + "��ȥ��\n");
     else{
           write ("�����ż������Լ���ͷ������ȥ��\n");
           tell_room( environment ( me ), me -> query("name") +
                      "���𼦵����Լ���ͷ���ң�\n",
                      ( { this_object() , me } )
                    );
           me -> add("bellicosity", -5);
           if( me -> query("bellicosity") < 0 ) me -> set("bellicosity", 0);
           destruct( this_object() );
           return 1;
         }
     tell_room( environment ( me ), me -> query("name") +
                "���𼦵���" + target -> query("name") + "�ҹ�ȥ��\n",
                ( { me , target } )
              );
     tell_room( environment ( target ), 
                "��Ȼһ�ż�����������" + target -> query("name") +
                "������, Ū����ȫ�������ģ�\n",
                ( { me , target } )
              );
     tell_object( target,
                   HIW"" + me -> name() + "��Ȼ��һ�ż����ҵ�������, "
                   + "Ū�������������ģ�\n" NOR,
                  ( { me , target } )
                );
     tell_object( me,
                  HIC"ֻ������׼ȷ������" + target -> query("name") +
                  "������, Ū��������������һƬ��\n"NOR,
                  ( { me , target } )
                );
     target -> add("bellicosity", -1);
     if( target -> query("bellicosity") < 0 ) target -> set("bellicosity", 0);
     destruct( this_object() );
     return 1;
}
