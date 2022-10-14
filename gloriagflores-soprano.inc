\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"

	\transpose g a {
		\key g \major
		R2.*4  |
%% 5
		d' 4. d'  |
		g' 4. g' 4 g' 8  |
		a' 4. g' 4 e' 8  |
		fis' 4 ( e' 8 ) d' d' d'  |
		b' 4. a'  |
%% 10
		g' 2 g' 8 g'  |
		a' 8 a' a' a' g' e'  |
		fis' 2 d' 8 d'  |
		b' 4. a'  |
		g' 2 g' 8 g'  |
%% 15
		g' 8 g' g' g' fis' fis'  |
		g' 2. ~  |
		g' 2.  |
		R2.  |
		r4. r4 g' 16 g'  |
%% 20
		\key g \minor
		g' 8 g' g' g' 4 g' 8  |
		g' 8 g' 4 ~ g' 8 g' g'  |
		bes' 8 g' g' bes' g' bes'  |
		d'' 8 c'' bes' c'' 4.  |
		ees'' 8 d'' c'' c'' bes' c''  |
%% 25
		g' 2.  |
		d'' 8 c'' bes' c'' 4.  |
		ees'' 8 d'' c'' c'' ( bes' ) c''  |
		\key g \major
		d'' 4. d'' ~  |
		d'' 2.  |
%% 30
		d' 4. d'  |
		g' 4. g' 4 g' 8  |
		a' 4. g' 4 e' 8  |
		fis' 4 ( e' 8 ) d' d' d'  |
		b' 4. a'  |
%% 35
		g' 2 g' 8 g'  |
		a' 8 a' a' a' g' e'  |
		fis' 2 d' 8 d'  |
		b' 4. a'  |
		g' 2 g' 8 g'  |
%% 40
		g' 8 g' g' g' fis' fis'  |
		g' 2. ~  |
		g' 2.  |
		R2.  |
		r4. r4 g' 8  |
%% 45
		\key g \minor
		g' 8 g' g' g' g' g'  |
		g' 8 g' g' g' 4.  |
		bes' 8 g' g' bes' g' 4  |
		d'' 8 ( c'' ) bes' c'' c'' 4  |
		ees'' 8 ( d'' ) c'' c'' bes' c''  |
%% 50
		g' 4. g'  |
		r8 g' g' g' g' bes'  |
		d'' 8 c'' bes' c'' 4 g' 8  |
		ees'' 8 d'' c'' c'' bes' c''  |
		\key g \major
		d'' 2.  |
%% 55
		R2.  |
		d' 4. d'  |
		g' 4. g' 4 g' 8  |
		a' 4. g' 4 e' 8  |
		fis' 4 ( e' 8 ) d' d' d'  |
%% 60
		b' 4. a'  |
		g' 2 g' 8 g'  |
		a' 8 a' a' a' g' e'  |
		fis' 2 d' 8 d'  |
		b' 4. a'  |
%% 65
		g' 2 g' 8 g'  |
		g' 8 g' g' g' fis' fis'  |
		g' 2. ~  |
		g' 2.  |
		R2.  |
%% 70
		r4. r4 g' 16 g'  |
		g' 4 g' 8 g' g' g' 16 g'  |
		g' 8 g' g' g' g' 4  |
		a' 4 a' 8 a' g' e'  |
		fis' 4 ( e' 8 ) d' d' d'  |
%% 75
		b' 4 b' 8 a' 4 a' 8  |
		g' 8 e' 4 ~ e' 4.  |
		c'' 4 c'' 8 c'' ( b' ) c''  |
		a' 2 d' 8 d'  |
		d'' 4 d'' 8 d'' 4 d'' 8  |
%% 80
		d'' 4 r8 b' ( a' ) g'  |
		c'' 4. ( b' )  |
		a' 2.  |
		d'' 8 d'' d'' d'' d'' d''  |
		d'' 4 ( b' 8 ) g' d' d'  |
%% 85
		c'' 8 c'' c'' c'' b' g'  |
		a' 4. r8 d' d'  |
		c'' 8 c'' c'' c'' b' g'  |
		a' 4. a'  |
		g' 2. ~  |
%% 90
		g' 2.  |
		g' 4. a'  |
		a' 4. a'  |
		g' 2. ~  |
		g' 2.  |
%% 95
		g' 4. a'  |
		a' 4. a'  |
		g' 2. ~  |
		g' 2.  |
		R2.*3  |
		\bar "|."
	} % end transpose
	} % end context voice

	\new Lyrics \lyricsto "voz-soprano" {
		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		"Te a" -- la -- ba -- mos, te ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos y glo -- ri -- fi -- ca -- mos, ¡oh, Dios,
		Pa -- dre y rey ce -- les -- tial!
		¡Glo -- "ria al" Se -- ñor, Dios to -- do -- po __ de -- ro -- so! __

		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		Se -- ñor Je -- su -- cris -- to, Cor -- de -- ro de Dios,
		Hi -- jo del Pa -- dre,
		tú __ que qui -- tas el __ pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros, ¡oh, Dios!
		a -- tien -- "de a" tu pue -- blo, Se -- ñor.


		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		Tú "que es" -- tás sen -- ta -- "do a" la de -- re -- cha del Pa -- dre,
		ten pie -- dad de no -- so __ tros,
		por -- que só -- lo "tú e" -- res San -- to, __
		só -- lo tú, __ Se -- ñor,
		só -- lo tú, al -- tí -- si -- mo Je __ su -- cris __ to,
		con el Es -- pí -- ri -- tu San __ to,
		en la glo -- ria del Pa -- dre, a -- mén,
		en la glo -- ria del Pa -- dre, a -- mén, a -- mén, __
		glo -- "ria a" ti, a -- mén, __
		glo -- "ria a" ti, a -- mén. __
	}
>>
