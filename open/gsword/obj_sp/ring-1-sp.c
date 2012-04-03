#include <ansi.h>
inherit NPC;
object keep_owner;
void create()
{
   set_name("ring-1���ع�",({"ring-1-sp"}));
   set("short","          ");
   set("long","");
   set("age", 10);
   set("combat_exp", 100);
   set("attitude","peaceful");
   setup();
   set_heart_beat(1);
}
void invocation(object who)
{
        keep_owner = who;
        return;
}
void heart_beat()
{ 
  int _max_kee,_kee,_eff_kee,have_ring;
  object _ob; 
  _ob = this_object();
  if( !objectp(keep_owner) )
     destruct(_ob);  
  have_ring = keep_owner->query_temp("ring",1);
  if( !keep_owner->is_fighting() || !have_ring ) 
  {
     keep_owner->delete_temp("_call_out");
     destruct(_ob);
  }
  if( random(100) > 80)
  {
    message_vision(HIM+"�챦ʯָ�䷢��һ�����¢����$N,$N���˿ں�����.\n"+NOR,keep_owner);
    _max_kee = keep_owner->query("max_kee",1);
    _kee = keep_owner->query("kee",1);
    _eff_kee = keep_owner->query("eff_kee",1);
    _kee = _kee + 30;
    if( _kee > _max_kee )
      _kee = _max_kee;
    keep_owner->set("kee",_kee);  
    if( _kee > _eff_kee )
       keep_owner->set("eff_kee",_kee);    
  }
  return;
}
