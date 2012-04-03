inherit ROOM;
void create() {
	set( "short", "$HIR$������$NOR$" );
	set( "light_up", 1 );
	set( "owner", "flyindance" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room196",
	]) );
	set( "long", @LONG

$HIR$                                        &.  &.     .
                                        ~ss.&ss. .s'
                                .     .ss&&&&&&&&&&s.
                                &. s&&&&&&&&&&&&&&`&&Ss
                                ~&&&&&&&&&&&&&&&&&&o&&&       .
                               s&&&&&&&&&&&&&&&&&&&&&&&&s.  .s
                              s&&&&&&&&&~&&&&&&~~~~&&&&&&~&&&&&.
                              s&&&&&&&&&&s~~&&&&ssssss~&&&&&&&&~
                             s&&&&&&&&&&'         `~~~ss~&~&s~~
                             s&&&&&&&&&&.              `~~~~~&  .s&&s
                             s&&&&&&&&&&&&s....               `s&&'  `
                         `ssss&&&&&&&&&&&&&&&&&&&&####s.     .&&~&.   . s-
                           `~~~~&&&&&&&&&&&&&&&&&&&&#####&&&&&&~     &.&'
                                 ~&&&&&&&&&&&&&&&&&&&&&####s~~     .&&&|
                                  ~&&&&&&&&&&&&&&&&&&&&&&&&##s    .&&~ &
                                   &&~~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~   `
                                  &&~  ~&~&&&&&&&&&&&&&&&&&&&&S~~~~'
                             .   .~     '  &&&&&&&&&&&&&&&&####s
                             &.          .s&&&&&&&&&&&&&&&&&####~
                 .           ~&s.   ..ssS&&&&&&&&&&&&&&&&&&&####~
                 &           .&&&S&&&&&&&&&&&&&&&&&&&&&&&&#####~
                 Ss     ..sS&&&&&&&&&&&&&&&&&&&&&&&&&&&######~~
                  ~&&sS&&&&&&&&&&&&&&&&&&&&&&&&&&&########~
           .      s&&&&&&&&&&&&&&&&&&&&&&&&#########~~'
           &    s&&&&&&&&&&&&&&&&&&&&&#######~~'      s'         .
           &&..&&&&&&&&&&&&&&&&&&######~'       .....&&....    .&
            ~&&&&&&&&&&&&&&&######~' .     .sS&&&&&&&&&&&&&&&&s&&
              &&&&&&&&&&&&#####~     &. .s&&&&&&&&&&&&&&&&&&&&&&&&s.
   )          &&&&&&&&&&&#####'      `&&&&&&&&&###########&&&&&&&&&&&.
  ((          &&&&&&&&&&&#####       &&&&&&&&###~       ~####&&&&&&&&&&
  ) \         &&&&&&&&&&&&####.     &&&&&&###~             ~###&&&&&&&&&   s'
 (   )        &&&&&&&&&&&&&####.   &&&&&###~                ####&&&&&&&&s&&'
 )  ( (       &&~&&&&&&&&&&&#####.&&&&&###'                .###&&&&&&&&&&~
 (  )  )   _.&~   &&&&&&&&&&&&######.&&##'                .###&&&&&&&&&&
 ) (  ( \.         ~&&&&&&&&&&&&&#######....          ..####&&&&&&&&&&&~
(   )& )  )        .&&&&&&&&&&&&&&&&&&####################&&&&&&&&&&&~
(   (&&  ( \     _sS~  `~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&S&&.
 )  )&&&s ) )  .      .   `&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~'  `&&
  (   &&&Ss/  .&.    .&..s&&&&&&##S&&&&&&&&&&&&&&&&&&&&&&&&S~~        '
    \)_&&&&&&&&&&&&&&&&&&&&&&&##~  &&        `&&.        `&&.
        `~S&&&&&&&&&&&&&&&&&#~      &          `&          `&
            `~~~~~~~~~~~~~'         '           '           '$NOR$

LONG);
	setup();
	replace_program(ROOM);
}