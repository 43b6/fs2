#include <ansi.h>
void get_dumpling(object me);
int do_command(object me,object ob,string arg)
{
	int i,mud_age,off_time,power;
	mud_age = me->query("mud_age");
	off_time = me->query_temp("officer_time");
        if( mud_age > off_time+300 )
        {
          object pill;
          string str;
          me->set_temp("officer_time",mud_age);
          power = me->query("max_officer_power");
          if(ob->query("officer_type")!="food")
          {
             tell_object(me,"�����ǻ�ʳ�١�\n");
             return 1;
          }
          if( power <100)
          {
            i=2;
          }else if( power < 500)
          {
            i =3;
          }else{
            i=4;
          }
          switch( random(i) )
          {
          case 0:
            str="/open/common/obj/pill";
            break;
          case 1:
            str="/open/gsword/obj/g_pill";   
            break; 
          case 2:
            str="/open/gsword/obj/ff_pill";
            break;
          case 3:
            str="/daemon/class/doctor/medicine/curesick";
          }
          pill=new(str);
          pill->move(me);
          pill->add_amount( (5-i)*5 );
	message_vision(
	CYN "$N˵��������Ҫ���������ϸ���׼����\n" NOR,me);
	message_vision(
	    "$N˵��������������Ҫ�Ĳ�����\n$N����Щ������$n��\n",ob,me);
	for(i=0;i<5;i++)
		get_dumpling(me);
	return 1;
      }
      message_vision("$N˵�����Բ���,����,��δ������ʱ��.\n",ob);
      return 1;
}
void get_dumpling(object me)
{
	object obj;
	seteuid(getuid());
	obj=new("/obj/example/dumpling");
	obj->move(me);
}
