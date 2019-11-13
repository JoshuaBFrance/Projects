/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project_notes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:50:56 by jfrances          #+#    #+#             */
/*   Updated: 2019/11/12 19:10:46 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1. Read output (map)
 * -	use a set buffer size for first malloc
 * -	create a reading loop to transfer the read information into an array
 * -	set a realloc in case of too large string 
 * 2. Run map through 
 * -	create strlen of map
 * -	put array
 * -	run algorithm on the map
 * -	print new map
 * 3. Set edge cases
 * -	taking multiple maps
 * -	intepreting full maps
 * -	interpreting empty strings
 * -	interpreting wrong characters
 * 4. Optimization
 * -	use less memory
 * -	run faster
 * -	comments
 * 5. Notes:
 * -	first line displayed will == to number of rows, empty, full
 * -	possibly two binary searches run nearly simultaneously
 *
