// incense.c

inherit ITEM;

void create()
{
   set_name("香火", ({ "incense" }) );
   set_weight(20);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "根");
      set("long", "这是用来祭祀鬼神所用的香火。\n");
      set("value", 100);
   }
}
