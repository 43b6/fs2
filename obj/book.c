inherit F_MORE;
inherit ITEM;

void create()
{
  set ( "unit", "��");
  set ( "weight", 200 );
  set ( "value", 10 );
  setup();
}

void init()
{
  add_action ( "do_read", "read" );
}

int do_read (string str)
{
  int page, max_page;
  int i;

  if ( !str ) return 0;
  // �������û����
  if ( environment() && environment() != this_player() ) return 0;
  if ( str != this_object()->query("id") ) return 0;
  
  this_player()->start_more (read_file (this_object()->query ( "book_path" )) );
  return 1;
}
